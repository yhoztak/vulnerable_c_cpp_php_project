
<?php
session_start();

echo "<h1>PHP Vulnerability Examples</h1>";

// SQL Injection Vulnerable Login Form
if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['username'], $_POST['password'])) {
    login($_POST['username'], $_POST['password']);
} else {
    echo '<form method="POST" action="index.php">
            Username: <input type="text" name="username"><br>
            Password: <input type="password" name="password"><br>
            <input type="submit" value="Login">
          </form>';
}

function login($username, $password) {
    // Vulnerable SQL Query - prone to SQL Injection
    $conn = new mysqli("localhost", "root", "", "vuln_db");

    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    $query = "SELECT * FROM users WHERE username = '$username' AND password = '$password'";
    $result = $conn->query($query);

    if ($result->num_rows > 0) {
        $_SESSION['username'] = $username;
        echo "<h2>Welcome $username!</h2>";
    } else {
        echo "<h2>Invalid credentials!</h2>";
    }

    $conn->close();
}

// XSS Vulnerability Example
if (isset($_GET['name'])) {
    $name = $_GET['name'];
    echo "<p>Hello, $name!</p>"; // Vulnerable to XSS
}

// Insecure Session Example
if (isset($_GET['action']) && $_GET['action'] === 'logout') {
    session_destroy();
    echo "<p>You have been logged out</p>";
}

// File Inclusion Vulnerability
if (isset($_GET['page'])) {
    include($_GET['page']); // Vulnerable to Local File Inclusion (LFI)
}
?>
