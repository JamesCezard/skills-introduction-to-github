<?php
    include_once("../useConnect.php");

    function Insert_etudiant($nom,$prenom,$sexe,$tel,$filliere,$niveau)
    {
        $con = use_mysqli();
        $sql = "INSERT INTO `etudiant`(`nom`, `prenom`, `sexe`, `tel`, `filliere`, `niveau`) VALUES ('$nom','$prenom','$sexe','$tel','$filliere','$niveau'); ";

        $con->query($sql);
    }

    function Select_etudiant(){
        $con = use_mysqli();
        $sql = "SELECT `id`, `nom`, `prenom`, `sexe`, `tel`, `filliere`, `niveau` FROM `etudiant` WHERE 1";
         $rs = $con->query($sql);
         $tab = $rs->fetch_all(MYSQLI_ASSOC);
         return $tab;
    }

    function Select_etudiantId($id){
        $con = use_mysqli();
        $sql = "SELECT `id`, `nom`, `prenom`, `sexe`, `tel`, `filliere`, `niveau` FROM `etudiant` WHERE `id`='$id'";
         $rs = $con->query($sql);
         $tab = $rs->fetch_all(MYSQLI_ASSOC);
         return $tab;
    }

    function Update_etudiant($id,$nom,$prenom,$sexe,$tel,$filliere,$niveau)
    {
        $con = use_mysqli();
        $sql = "UPDATE `etudiant` SET `nom`='$nom',`prenom`='$prenom',`sexe`='$sexe',`tel`='$tel',`filliere`='$filliere',`niveau`='$niveau' WHERE `id`='$id'";

        $con->query($sql);
    }

    function Delete_etudiant($id)
    {
        $con = use_mysqli();
        $sql = "DELETE FROM `etudiant` WHERE `id`='$id'";

        $con->query($sql);
    }

    // Insert_etudiant("Dieusibon","Alfred","Masculin","4875-0038","Licence","2");

//    $t= Select_etudiant();
//    print_r($t);
//    print_r(Select_etudiant());
//    print_r(Select_etudiantId(4));

// Update_etudiant("5","Dieusibon","Alfred","Masculin","4875-0038","Licence","2");
// Delete_etudiant(5);
?>