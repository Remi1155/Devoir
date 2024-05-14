# LIBRAIRIE STATIQUE


## REPERTOIRE DE TRAVAIL
/home/misa2026/Documents/S5/MrTahiry/14may/exercice2 (dossier contenant 4 sous-dossiers(sources, headers, libdyn et libstat) )

## COMPILATION DE TOUS LES FICHIERS SOURCES POUR LA BIBLIOTHÈQUE
```bash
    g++ -c ./sources/Activate.cpp
```
## CRÉATION DE LA LIBRAIRIE STATIQUE
```bash
    ar -rv libserieActivation.a Activate.o
```

## DEPLACEMENT DE LA LIBRAIRIE STATIQUE
```bash
    mv libserieActivation.a ./libstat
```

## LANCEMENT
```bash
    g++ ./sources/main.cpp -L/home/misa2026/Documents/S5/MrTahiry/14may/exercice2/libstat -lserieActivation -o serieActivationStat.exe;
    ./mainstat.exe
```



# LIBRAIRIE DYNAMIQUE

## REPERTOIRE DE TRAVAIL
/home/misa2026/Documents/S5/MrTahiry/14may/exercice2 (dossier contenant 4 sous-dossiers(sources, headers, libdyn et libstat) )


## COMPILATION DE TOUS LES FICHIERS SOURCES POUR LA BIBLIOTHÈQUE
```bash
    g++ -fPIC -c ./sources/Activate.cpp
```

## CRÉATION DE LA BIBLIOTHÈQUE DYNAMIQUE
```bash
    g++ -o  libseriActivation.so -shared Activate.o
```

## DEPLACEMENT DE `libseriActivation.so` VERS LE DOSSIER libdyn 
```bash
    mv libserieActivation.so ./libdyn
```

## CRÉATION DU FICHIER DE CONFIGURATION POUR LA BIBLIOTHÈQUE
```bash
    sudo touch /etc/ld.so.conf.d/libserieActivation.conf;
    sudo echo "/home/misa2026/Documents/S5/MrTahiry/14may/exercice2/libdyn" > /etc/ld.so.conf.d/libserieActivation.conf
```

## MIS A JOUR
```bash
    sudo ldconfig
```
## LANCEMENT DU PROGRAMME
```bash
    g++ ./sources/main.cpp -L/home/misa2026/Documents/S5/MrTahiry/14may/exercice2/libdyn -lserieActivatioon -o serieActivationDyn.exe;
    ./serieActivationDyn.exe
```
