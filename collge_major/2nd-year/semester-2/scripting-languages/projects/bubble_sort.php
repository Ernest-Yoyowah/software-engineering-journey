<?php
function bubbleSort(&$arr) {
    $n = count($arr) -1;
    for ($i = 0; $i < $n; $i++) {
        for ($j = 0; $j < $n - $i; $j++) {
            if ($arr[$j] > $arr[$j + 1]) {
                // Swap elements
                // $temp = $arr[$j];
                // $arr[$j] = $arr[$j + 1];
                // $arr[$j + 1] = $temp;
                [$arr[$j], $arr[$j + 1]] = [$arr[$j + 1], $arr[$j]];
            }
        }
    }
}

// Example usage:
$array = [64, 34, 25, 12, 22, 11, 90];
bubbleSort($array);

echo "Sorted array: ";
print_r($array);

