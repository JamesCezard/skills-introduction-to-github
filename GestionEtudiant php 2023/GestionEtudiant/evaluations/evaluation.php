<?php
    include_once("../useConnect.php");

    function Insert_evaluation($id_etudiant,$cod_ematiere,$note,$session,$mention)
    {
        $con = use_mysqli();
        $sql = "INSERT INTO `evaluation`(`id_etudiant`, `code_matiere`, `note`, `session`, `mention`) VALUES ('$id_etudiant','$cod_ematiere','$note','$session','$mention')";

        $con->query($sql);
    }

    function Select_evaluation(){
        $con = use_mysqli();
        $sql = "SELECT `evaluation`.`code_eval`, `etudiant`.`nom`, `etudiant`.`prenom`, `matiere`.`libelle`, `evaluation`.`note`, `matiere`.`coefficient`, `evaluation`.`session`, `evaluation`.`mention`
        FROM `etudiant`	, `matiere`, `evaluation`
        WHERE `evaluation`.`id_etudiant`=`etudiant`.`id`
        AND `evaluation`.`code_matiere` = `matiere`.`code_matiere`;";
         $rs = $con->query($sql);
         $tab = $rs->fetch_all(MYSQLI_ASSOC);
         return $tab;
    }

    function Select_evaluationcode($code_eval){
        $con = use_mysqli();
        $sql = "SELECT `evaluation`.`code_eval`,`etudiant`.`nom`, `etudiant`.`prenom`, `matiere`.`libelle`, `evaluation`.`note`, `matiere`.`coefficient`, `evaluation`.`session`, `evaluation`.`mention`
        FROM `etudiant`	, `matiere`, `evaluation`
        WHERE `evaluation`.`id_etudiant`=`etudiant`.`id`
        AND `evaluation`.`code_matiere` = `matiere`.`code_matiere`
        AND `evaluation`.`code_eval` = '$code_eval';";
         $rs = $con->query($sql);
         $tab = $rs->fetch_all(MYSQLI_ASSOC);
         return $tab;
    }

    function Update_evaluation($code_eval,$id_etudiant,$cod_ematiere,$note,$session,$mention)
    {
        $con = use_mysqli();
        $sql = "UPDATE `evaluation` SET `id_etudiant`='$id_etudiant',`code_matiere`='$cod_ematiere',`note`='$note',`session`='$session',`mention`='$mention' WHERE `code_eval`='$code_eval'";

        $con->query($sql);
    }

    function Delete_evaluation($code_eval)
    {
        $con = use_mysqli();
        $sql = "DELETE FROM `evaluation` WHERE `code_eval`='$code_eval'";

        $con->query($sql);
    }

    // Insert_etudiant("Dieusibon","Alfred","Masculin","4875-0038","Licence","2");

//    $t= Select_etudiant();
//    print_r($t);
   print_r(Select_evaluation());
//    print_r(Select_etudiantId(4));

// Update_etudiant("5","Dieusibon","Alfred","Masculin","4875-0038","Licence","2");
// Delete_etudiant(5);
?>