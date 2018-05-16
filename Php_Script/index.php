<!DOCTYPE html>
<html>
<body>

<h2>Textarea</h2>

<br>
<form action="./action_page.php" method="get">
<?php
$servername = "localhost";
$username = "root";
$password = "root";
$dbname = "db_ib";

// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 

$sql = "SELECT date FROM pry_table";
$result = $conn->query($sql);
echo "<select name=date>";
if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
        echo "<option value=".$row['date'].">".$row['date']."</option>";
    }
} else {
    echo "0 results";
}echo"</select>";
$conn->close();
?>

<br>
<br>
<p>Arabic Hadith</p>
  <textarea name="arabicHadith" rows="5" cols="50"></textarea>
  <br>

<p>English Hadith</p>
<textarea name="EnglishHadith" rows="5" cols="50"></textarea>
  <br>
  
  <input type="submit">
</form>

</body>
</html>

