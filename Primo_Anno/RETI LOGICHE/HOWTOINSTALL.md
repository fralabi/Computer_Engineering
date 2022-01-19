# HOW TO INSTALL

## [Icarus Veriloge GTKWave](https://bleyer.org/icarus/) <br>

Per installare Icarus Verilog dovete scaricare l'ultima versione del programma <br>
[iverilog-v11-20210204-x64_setup.exe [44.1MB]](https://bleyer.org/icarus/iverilog-v11-20210204-x64_setup.exe)

Accetta la licenza del programma
<p align="center">
<img height="300" weight="400" style="align:center" src="https://github.com/fralabi/images/blob/main/COMPUTER_ENGINEERING/Capture.PNG">
</p>

La nota sotto avvisa in quale cartella dover installare il programma per evitare problemi
<p align="center">
<img height="300" weight="400" style="align:center" src="https://github.com/fralabi/images/blob/main/COMPUTER_ENGINEERING/Capture1.PNG">
</p>

Poi vi verrà chiesto quali componenti installare, selezionate entrambi i programmi.
<p align="center">
<img height="300" weight="400" style="align:center" src="https://github.com/fralabi/images/blob/main/COMPUTER_ENGINEERING/Capture2.PNG">
</p>

ATTENZIONE! Vi verrà successivamente chiedo se volete aggiungere la cartella eseguibile alla variabile di ambiente PATH
<p align="center">
<img height="300" weight="400" style="align:center" src="https://github.com/fralabi/images/blob/main/COMPUTER_ENGINEERING/Capture3.PNG">
</p>

Infine confermate tutto premendo su "INSTALL"
<p align="center">
<img height="300" weight="400" style="align:center" src="https://github.com/fralabi/images/blob/main/COMPUTER_ENGINEERING/Capture4.PNG">
</p>

Dopo l'installazione per verificare che sia andata a buon fine portatevi su qualunque cartella del vostor pc e lanciate il comando "iverilog" se tutto è stato fatto correttamente vedrete l'output seguente, in caso contrario vi spunterà una schermata di errore che vi avvisa che il comando non esiste
``` 
path> iverilog
iverilog.exe: no source files.

Usage: iverilog [-EiSuvV] [-B base] [-c cmdfile|-f cmdfile]
                [-g1995|-g2001|-g2005|-g2005-sv|-g2009|-g2012] [-g<feature>]
                [-D macro[=defn]] [-I includedir] [-L moduledir]
                [-M [mode=]depfile] [-m module]
                [-N file] [-o filename] [-p flag=value]
                [-s topmodule] [-t target] [-T min|typ|max]
                [-W class] [-y dir] [-Y suf] [-l file] source_file(s)

See the man page for details.
```

## [VS Code](https://code.visualstudio.com/download) <br>
L'editor di Microsoft Visual Studio Code permette lo sviluppo di programmi in System Verilog con l'uso di alcune estensioni che aiutino il programmatore stesso
a evidenziare le parti in modo differente e alla visualizzazione dei file .vcd
Extensions
- [SystemVerilog - Language Support](https://marketplace.visualstudio.com/items?itemName=eirikpre.systemverilog)
- [Verilog-HDL/SystemVerilog/Bluespec SystemVerilog](https://marketplace.visualstudio.com/items?itemName=mshr-h.VerilogHDL)
- [WaveTrace](https://marketplace.visualstudio.com/items?itemName=wavetrace.wavetrace)

