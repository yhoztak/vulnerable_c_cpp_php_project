<?php
if (isset($_GET['file'])) {
    $file = $_GET['file'];
    readfile($file); // Vulnerable to directory traversal
    // Always sanitize and validate file paths before use
}
?>