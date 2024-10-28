<?php
if (isset($_POST['serialized_data'])) {
    $data = $_POST['serialized_data'];
    $object = unserialize($data); // Vulnerable to insecure deserialization
    // Always validate input before unserializing
}
?>