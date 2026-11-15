# !/ bin / bash
function hypotenuse () {
    local a=$1 ; local b=$2 ;
    a=$((a*a))
    b=$((b*b))
    csqr=$((a+b))
    c=`echo "scale=10; sqrt ($csqr)" | bc`
}
echo -n "Enter a and b : "
read a b
hypotenuse $a $b
echo " a = $a , b = $b , c = $c , csqr = $csqr "