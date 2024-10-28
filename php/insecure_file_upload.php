<?php
if (isset($_FILES['file'])) {
    $file_name = $_FILES['file']['name'];
    move_uploaded_file($_FILES['file']['tmp_name'], "uploads/$file_name"); // No file validation
    echo "File uploaded: $file_name";
    // Always validate file types and content before processing uploads
}
?>