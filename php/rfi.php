<?php
if (isset($_GET['remote_page'])) {
    $remote_page = $_GET['remote_page'];
    include($remote_page); // Vulnerable to Remote File Inclusion
    // Disable remote file inclusion in php.ini and sanitize input
}
?>