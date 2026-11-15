BEGIN {
    FS=":"
    print "Listing all courses chosen by students of Mathematics department\n"
}
{ 
    dept=substr($5,3,2)
    if(dept=="MA") {
        printf("%s %s %s with roll number %s has taken the courses %s\n", $1,$2,$3,$5,$6);
        nst++;
    }
}
END {
    print "Number of Math department students are "nst
}