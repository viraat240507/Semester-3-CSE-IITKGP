BEGIN {
    FS=":"
    print "Counting students by type..."
}
{
    count[$4]++
}
END {
    print "---Summary Results---"
    for (type in count) {
        print type" : "count[type]" students"
    }
}