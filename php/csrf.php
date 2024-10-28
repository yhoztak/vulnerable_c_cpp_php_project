<?php
session_start();
if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['update_profile'])) {
    if (!isset($_POST['csrf_token']) || $_POST['csrf_token'] !== $_SESSION['csrf_token']) {
        die("Invalid CSRF token"); // Vulnerable if not using a proper CSRF token system
    }
    echo "Profile updated!";
}
// Ensure to generate and validate CSRF tokens properly
?>