# HOW TO USE

Per testare il funzionamento dell'ambiente basta usare questi due file di esempio.

``` 
Per prima cosa "compiliamo" il programma includendo 
- -o sillyfunction.vvp per nominare il file in output, se non specificato prenderà il nome a.out
- sillyfunction.v che è il nome del file che descrive il circuito
- sillyfunction_tb.v che è il nome del file che testa il funzionamento del circuito

path> iverilog -g2012 -o sillyfunction.vvp sillyfunction.v sillyfunction_tb.v
```
```
In questo modo creiamo un file "eseguibile" che ci mostra il funzionamento del circuito descritto dal file sillyfunction.v 
path> vvp sillyfunction.vvp
```
```
Visualizziamo attraverso GTKWave l'andamento dei segnali in INPUT e OUTPUT del circuito

path> gtkwave waveform.vcd
``` 

#### sillyfunction.v
``` 
module sillyfunction (  input logic a, b, c,
                        output logic y);

                        assign y = ~b & ~c | a & ~b;
endmodule
``` 

#### sillyfunction_tb.v
``` 
`timescale 1ns/1ns

module sillyfunction_1();
  logic a, b, c;
  logic y;

  // instantiate device under test
  sillyfunction dut(a, b, c, y);

  // apply inputs one at a time
  initial begin

    a = 0;  b = 0;  c = 0; #10;
                    c = 1; #10;
            b = 1;  c = 0; #10;
                    c = 1; #10;
    a = 1;  b = 0;  c = 0; #10;
                    c = 1; #10;
            b = 1;  c = 0; #10;
                    c = 1; #10;

    $display("Test complete");

  end

  initial begin
    $dumpfile("waveform.vcd");
    $dumpvars(0, sillyfunction_1);  
  end

endmodule 
``` 
