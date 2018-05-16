<?php

$servername = "localhost";
$username = "root";
$password = "root";
$dbname = "db_ib";

// Create connection
$conn = mysqli_connect($servername, $username, $password, $dbname);
// Check connection
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}
$A_hadith=$_GET[arabicHadith];
$E_hadith=$_GET[EnglishHadith];
$date=$_GET[date];
$sql ="UPDATE `pry_table` SET hadith_eng='$E_hadith' ,hadith_de='$A_hadith' WHERE date='$date'";

if (mysqli_query($conn, $sql)) {
echo "The Entries as following :";
echo "<br>";
echo "<b>Arabic Hadith<b>";
echo "<br>";
echo $A_hadith;
echo "<br>";
echo "<b>English Hadith<b>";
echo "<br>";
echo $E_hadith;
echo "<br>";
echo "Date is :";
echo "<br>";
echo $date;
echo "<br>";
    echo "New record created successfully";
} else {
    echo "Error: " . $sql . "<br>" . mysqli_error($conn);
}

mysqli_close($conn);
?>