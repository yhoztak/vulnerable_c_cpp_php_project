<?php
if (isset($_GET['command'])) {
    $command = $_GET['command'];
    system($command); // Vulnerable to command injection
    // Use escapeshellcmd() or escapeshellarg() to prevent this
}
?>