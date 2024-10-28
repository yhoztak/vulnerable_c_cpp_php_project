<?php
if (isset($_POST['comment'])) {
    $comment = $_POST['comment'];
    echo "<p>Comment: $comment</p>"; // Vulnerable to XSS
    // Always escape output using htmlspecialchars() or equivalent
}
?>