<body>
<h1 style="color: green;">Welcome to the Dungeon</h1>
<p>We know It's your First time so PRESS it with care</p>
<form action="" method="get">
	<input type="submit" name="button" value="Change me to Something more relevant" />
</form>
</body>

<?php
if (isset($_POST['button']) && ($_POST['button']==='flag')) {
    echo '3301{U_Pr335ed_7h3_R1gh7_Bu770N_And_H4v3_Cl34r3d_7h3_Dungeon:)}';
}
?>
