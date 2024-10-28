<?php
if (isset($_GET['id'])) {
    $id = $_GET['id'];
    $query = "SELECT * FROM users WHERE id = $id"; // Vulnerable to SQL Injection
    echo $query; // For demonstration purposes
    // In a real scenario, use prepared statements to prevent SQL injection
}
?>

