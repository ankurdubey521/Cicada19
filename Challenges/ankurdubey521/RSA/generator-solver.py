from math import gcd
import Crypto
from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from Crypto import Random
import ast

# Generator

flag = b"3301{734m_6r1mj4w}"

random_generator = Random.new().read
key = RSA.generate(1024, random_generator) 
cipher = PKCS1_OAEP.new(key)

encrypted = cipher.encrypt(flag)
with open("rsa.txt", "w+") as file:
    file.write("P: {}\n".format(key.p))
    file.write("Q: {}\n".format(key.q))
    file.write("E: {}\n".format(key.e))

with open("ciphertext.binary", "wb+") as file:
    file.write(encrypted)


# Solver

d = 0
x = 0
y = 0

def extended_eucledian(p, q):
    global d, x, y
    if q == 0:
        d = p
        x = 1
        y = 0
    else:
        extended_eucledian(q, p % q)
        temp = x
        x = y
        y = temp - (p // q) * y

def modinv(a, m):
    global x
    extended_eucledian(a , m)
    return (x % m + m) % m


P = key.p
Q = key.q
E = key.e

N = P * Q
lambda_N = (P - 1) * (Q - 1) // gcd(P - 1, Q - 1)
D = modinv(E, lambda_N)

user_key = RSA.construct([N, E, D])
user_cipher = PKCS1_OAEP.new(user_key)
with open("ciphertext.binary", "rb") as file:
    decrypted = user_cipher.decrypt(file.read())
    print("Decrypted Flag: {}".format(decrypted))
