<?php
function binarySearch($arr, $target) {
    $left = 0;
    $right = count($arr) - 1;

    while ($left <= $right) {
        // Calculate the middle index
        $mid = floor(($left + $right) / 2);

        // Check if the target is at the middle
        if ($arr[$mid] == $target) {
            return $mid;
        }

        // If the target is greater, ignore the left half
        if ($arr[$mid] < $target) {
            $left = $mid + 1;
        } else {
            // If the target is smaller, ignore the right half
            $right = $mid - 1;
        }
    }

    // Target not found
    return -1;
}

// Example usage:
$sortedArray = [1, 3, 5, 7, 9, 11, 13, 15];
$target = 7;

$result = binarySearch($sortedArray, $target);

if ($result != -1) {
    echo "Element found at index: " . $result;
} else {
    echo "Element not found in the array.";
}
?>
