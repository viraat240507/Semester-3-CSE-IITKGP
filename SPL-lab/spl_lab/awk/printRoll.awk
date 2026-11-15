BEGIN {
    FS=":"
    print "Reading the student database..."
}
{
    print "Student: "$1" "$3
    n = split($6,subject,",")

    for(i=1;i<=n;i++) {
        print "- Subject "i": "subject[i]
    }
    print "--------------------"
}
END {
    print "Done for the day"
}