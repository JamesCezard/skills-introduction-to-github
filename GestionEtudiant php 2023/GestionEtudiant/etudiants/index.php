<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="../style.css">
</head>
<body>
    <?php
        include_once("../entete.php");
        include_once("./etudiant.php")
    ?>
    <table>
        <tr>
            <th>Nom</th>
            <th>Prenom</th>
            <th>Sexe</th>
            <th>Tel</th>
            <th>Filliere</th>
            <th>Niveau</th>
            <th></th>
        </tr>
        <?php
         $tab= Select_etudiant();
         foreach($tab as $r)
         {
         ?>
            <tr>
                <td>
                    <?php echo($r['nom']); ?>
                </td>
                <td>
                    <?php echo($r['prenom']); ?>
                </td>
                <td>
                    <?php echo($r['sexe']); ?>
                </td>
                <td>
                    <?php echo($r['tel']); ?>
                </td>
                <td>
                    <?php echo($r['filliere']); ?>
                </td>
                <td>
                    <?php echo($r['niveau']); ?>
                </td>
                <td>
                    <a href="">Edit</a> |
                    <a href="">Delete</a>
                </td>
            </tr>
         <?php }?>
    </table>
</body>
</html>