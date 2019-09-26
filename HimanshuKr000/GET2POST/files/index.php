<body>
<h1 style="color: green;">Welcome to the Dungeon</h1>
<p>We know It's your First time so POST it with care</p>
<form action="" method="get">
	<input type="submit" name="button" value="I'll Give you what you seek" />
</form>
</body>

<?php
if (isset($_POST['button']) && ($_POST['button']==='flag')) {
    echo '3301{U_Pr335ed_7h3_R1gh7_Bu770N_And_H4v3_Cl34r3d_7h3_Dungeon:)}';
}
?>
