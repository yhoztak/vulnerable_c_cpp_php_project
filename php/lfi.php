<?php
if (isset($_GET['page'])) {
    $page = $_GET['page'];
    include($page); // Vulnerable to Local File Inclusion
    // Sanitize input and avoid directly including files based on user input
}
?>