<?php
function linearSearch($arr, $target) {
    foreach ($arr as $index => $element) {
        if ($element == $target) {
            return $index; // Target found
        }
    }
    return -1; // Target not found
}

// Example usage:
$array = [10, 20, 30, 40, 50];
$target = 30;

$result = linearSearch($array, $target);

if ($result != -1) {
    echo "Element found at index: " . $result;
} else {
    echo "Element not found in the array.";
}
?>
