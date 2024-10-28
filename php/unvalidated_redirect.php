<?php
if (isset($_GET['redirect'])) {
    $redirect = $_GET['redirect'];
    header("Location: $redirect"); // Vulnerable to unvalidated redirects
    // Always validate and whitelist redirect URLs
}
?>