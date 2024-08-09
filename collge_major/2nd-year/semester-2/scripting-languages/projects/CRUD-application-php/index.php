<?php
// Create a function to create a new record
function create($data) {
    // Get the name and age from the POST request
    $name = $_POST['name'];
    $age = $_POST['age'];
    // Add the new record to the data array
    $data[$name] = $age;
    // Return the updated data array
    return $data;
}

// Create a function to read a record
function read($data) {
    // Get the name from the POST request
    $name = $_POST['name'];
    // Check if the name exists in the data array
    if (isset($data[$name])) {
        // If it exists, echo the age
        echo "Age: " . $data[$name];
    } else {
        // If it doesn't exist, echo an error message
        echo "Name not found";
    }
}

// Create a function to update a record
function update($data) {
    // Get the name and age from the POST request
    $name = $_POST['name'];
    $age = $_POST['age'];
    // Check if the name exists in the data array
    if (isset($data[$name])) {
        // If it exists, update the age
        $data[$name] = $age;
    } else {
        // If it doesn't exist, echo an error message
        echo "Name not found";
    }
    // Return the updated data array
    return $data;
}

// Create a function to delete a record
function delete($data) {
    // Get the name from the POST request
    $name = $_POST['name'];
    // Check if the name exists in the data array
    if (isset($data[$name])) {
        // If it exists, remove the record from the data array
        unset($data[$name]);
    } else {
        // If it doesn't exist, echo an error message
        echo "Name not found";
    }
    // Return the updated data array
    return $data;
}

// Initialize an empty data array
$data = array();

// Check if the request method is POST
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    // Check which action was submitted (create, read, update, or delete)
    if (isset($_POST['create'])) {
        // If create was submitted, call the create function
        $data = create($data);
    } elseif (isset($_POST['read'])) {
        // If read was submitted, call the read function
        read($data);
    } elseif (isset($_POST['update'])) {
        // If update was submitted, call the update function
        $data = update($data);
    } elseif (isset($_POST['delete'])) {
        // If delete was submitted, call the delete function
        $data = delete($data);
    }
}
?>

<!-- Create a form to submit data -->
<form action="" method="post">
  <!-- Label and input field for name -->
  <label for="name">Name:</label>
  <input type="text" id="name" name="name"><br><br>
  
  <!-- Label and input field for age -->
  <label for="age">Age:</label>
  <input type="number" id="age" name="age"><br><br>
  
  <!-- Submit buttons for each action -->
  <button type="submit" name="action" value="create">Create</button>
  <button type="submit" name="action" value="read">Read</button>
  <button type="submit" name="action" value="update">Update</button>
  <button type="submit" name="action" value="delete">Delete</button>
</form>
