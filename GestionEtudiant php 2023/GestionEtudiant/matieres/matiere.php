<?php
    include_once("../useConnect.php");

    function Insert_matiere($libelle,$coefficient)
    {
        $con = use_mysqli();
        $sql = "INSERT INTO `matiere`(`libelle`, `coefficient`) VALUES ('$libelle','$coefficient')";

        $con->query($sql);
    }

    function Select_matiere(){
        $con = use_mysqli();
        $sql = "SELECT `code_matiere`, `libelle`, `coefficient` FROM `matiere` WHERE 1";
         $rs = $con->query($sql);
         $tab = $rs->fetch_all(MYSQLI_ASSOC);
         return $tab;
    }

    function Select_matierecode($code_matiere){
        $con = use_mysqli();
        $sql = "SELECT `code_matiere`, `libelle`, `coefficient` FROM `matiere` WHERE `code_matiere`='$code_matiere'";
         $rs = $con->query($sql);
         $tab = $rs->fetch_all(MYSQLI_ASSOC);
         return $tab;
    }

    function Update_matiere($code_matiere,$libelle,$coefficient)
    {
        $con = use_mysqli();
        $sql = "UPDATE `matiere` SET `libelle`='$libelle',`coefficient`='$coefficient' WHERE `code_matiere`='$code_matiere'";

        $con->query($sql);
    }

    function Delete_matiere($code_matiere)
    {
        $con = use_mysqli();
        $sql = "DELETE FROM `matiere` WHERE `code_matiere`='$code_matiere'";

        $con->query($sql);
    }

    Insert_matiere("Algo","100");


//    print_r(Select_matiere());
//    print_r(Select_matierecode(6));

// Update_etudiant("5","Dieusibon","Alfred","Masculin","4875-0038","Licence","2");
// Delete_etudiant(5);
?>