# Execute bash command in C

```s
>_ neofetch df
        #####            : aKA Linux 
       #######           : 5.18.14-zen1-1-zen 
       ##O#O##           : 1h 46m 
       #######           : 793 (pacman) 
     ###########         : zsh 
    #############        : Qtile 
   ###############       : vscode 
   ################      : i5-3320M 
  #################      : 2.97GiB / 11.56GiB 
#####################    : 192.168.0.6 
#####################
  #################

S.ficheros     bloques de 1K   Usados Disponibles Uso% Montado en
dev                  6050728        0     6050728   0% /dev
run                  6058784     1016     6057768   1% /run
/dev/sdb2           65478188 24502408    37603956  40% /
tmpfs                6058784   111180     5947604   2% /dev/shm
tmpfs                6058784    10144     6048640   1% /tmp
/dev/sdb1             120944    29732       91212  25% /boot/efi
/dev/sda1          263112772 31175792   218498824  13% /home
tmpfs                1211756       20     1211736   1% /run/user/1000
>_ >_ exit
```

Ejecutar comandos de bash en C usando la función system().