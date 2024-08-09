<?php

$num1 = 5;
$num2 = 2;

function addNums() {
    global $num1, $num2;
    return $num1 + $num2;

}

// echo addNums();

// echo abs(-3)

// $n = 5;
// $f = pow((1 + 1/$n), $n);

// $n = 3;
// $x = 2;
// echo $q = 1 + $n* $x/ 1*$x + ($n *($n-1) * pow($x, 2))/(2*($x * pow($x, 3) ));
// echo $q = 1 + ($n * $x) / (1 * $x) + ($n * ($n - 1) * pow($x, 2)) / (2 *pow($x, 3)); 

$P = 1000;
$r = 0.05;
$n = 12;
$t = 10;
echo $A = $P* pow((1 + $r/$n),($n * $t) );