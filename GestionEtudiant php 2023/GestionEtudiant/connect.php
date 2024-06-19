<?php
function connect_mysqli($hostname,$user,$pswd,$dbname){
    $con = new mysqli($hostname,$user,$pswd,$dbname);
    if($con)
        return $con;
}

// if(connect_mysqli("localhost","root","","gestion_etudiant"))
// {
//     echo "Good";
// }