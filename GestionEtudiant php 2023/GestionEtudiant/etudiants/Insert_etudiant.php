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
        include("../entete.php");
        include_once("etudiant.php");
    ?>
    <form action="" method="post">
        <div>
            <label for="">Nom</label>
        </div>
        <div>
            <input type="text" name="txtnom" id="">
        </div>
        <div>
            <label for="">Prenom</label>
        </div>
        <div>
            <input type="text" name="txtprenom" id="">
        </div>
        <div>
            <label for="">Sexe</label>
        </div>
        <div>
            <input type="radio" name="rdsexe" id="" value="Masculin">
            <label for="">Masculin</label>
            <input type="radio" name="rdsexe" id="" value="Feminin">
            <label for="">Feminin</label>
        </div>
        <div>
            <label for="">tel</label>
        </div>
        <div>
            <input type="text" name="txttel" id="">
        </div>
        <div>
            <label for="">Filliere</label>
        </div>
        <div>
            <select name="slFilliere" id="">
                <option value="Licence">Licence</option>
                <option value="DUT">DUT</option>
            </select>
        </div>
        <div>
            <label for="">Niveau</label>
        </div>
        <div>
            <select name="slNiveau" id="">
                <option value="1">1</option>
                <option value="2">2</option>
                <option value="3">3</option>
                <option value="4">4</option>
            </select>
        </div>
        <div>
            <input type="submit" value="Enregistrer" name="btSave">
        </div>
    </form>

    <?php
        if(isset($_POST['btSave']))
        {
            $nom = $_POST['txtnom'];
            $prenom = $_POST['txtprenom'];
            $sexe = $_POST['rdsexe'];
            $tel = $_POST['txttel'];
            $filliere = $_POST['slFilliere'];
            $niveau = $_POST['slNiveau'];

            Insert_etudiant($nom,$prenom,$sexe,$tel,$filliere,$niveau);
        }
    ?>
</body>
</html>