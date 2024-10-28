<?php
if (isset($_GET['user_id'])) {
    $user_id = $_GET['user_id'];
    $query = "SELECT * FROM users WHERE id = $user_id"; // Vulnerable to IDOR
    echo $query; // Ensure proper access control is implemented
}
?>