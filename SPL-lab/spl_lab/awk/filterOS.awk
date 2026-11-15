BEGIN {
    FS=":"
    print "Separating the OS peeps into UG and PG"
    nUG=0
    nPG=0
}
$6 ~ /OS/{
    if($4 ~ /UG/){
        nUG++
        UG_OS[nUG]=$5
    }
    else if ($4~/PG/){
        nPG++
        PG_OS[nPG]=$5
    }
}

END {
    print nUG " UG students have taken OS"
    for(i=1;i<=nUG;i++) {
        print "\t" UG_OS[i]
    }

    print nUG " PG students have taken OS"
    for(i=1;i<=nPG;i++) {
        print "\t" PG_OS[i]
    }
}