# LIBRAIRIE DYNAMIQUE


## REPERTOIRE DE TRAVAIL
    /home/misa2026/Documents/S5/MrTahiry/14may/exercice1 (dossier contennat 4 sous dossier (sources, headers, libdyn et libstat) et le fichier main.cpp)

## COMPILATION DE TOUS LES FICHIERS SOURCES POUR LA BIBLIOTHÈQUE
```bash
    g++ -fPIC -c ./sources/*
```

## CRÉATION DE LA BIBLIOTHÈQUE DYNAMIQUE
```bash
    g++ -o  libgeometrie.so -shared *.o
```

## DEPLACEMENT DE `libgeometrie.so` VERS LE DOSSIER libdyn 
```bash
    mv libgeometrie.so ./libdyn
```

## CRÉATION DU FICHIER DE CONFIGURATION POUR LA BIBLIOTHÈQUE
```bash
    sudo touch /etc/ld.so.conf.d/libgeometrie.conf
    echo "/home/misa2026/Documents/S5/MrTahiry/14may/geometrie/libdyn" > /etc/ld.so.conf.d/libgeometrie.conf
```

## MIS A JOUR
```bash
    sudo ldconfig
```

## LANCEMENT DU PROGRAMME
```bash
    g++ main.cpp -L/home/misa2026/Documents/S5/MrTahiry/14may/geometrie/libdyn -lgeometrie -o mainDyn.exe;
    ./mainDyn.exe
```






# LIBRAIRIE STATIQUE

## REPERTOIRE DE TRAVAIL
    /home/misa2026/Documents/S5/MrTahiry/14may/exercice1 (dossier contennat 4 sous dossier (sources, headers, libdyn et libstat) et le fichier main.cpp)

## COMPILATION DE TOUS LES FICHIERS SOURCES POUR LA BIBLIOTHÈQUE
```bash
    g++ -c ./sources/*
```

## CRÉATION DE LA LIBRAIRIE STATIQUE
```bash
    ar -rv libgeometrie.a *.o
```

## DEPLACEMENT DE LA LIBRAIRIE STATIQUE
```bash
    mv libgeometrie.a ./libstat
```

## LANCEMENT
```bash
    g++ ./main.cpp -L/home/misa2026/Documents/S5/MrTahiry/14may/geometrie/libstat -lgeometrie -o mainstat.exe;
    ./mainstat.exe
```
