<?php
$encrypted = base64_encode("SensitiveData"); // Weak encryption method
echo "<p>Encrypted Data: $encrypted</p>";
// Use strong encryption methods like OpenSSL for secure data storage
?>