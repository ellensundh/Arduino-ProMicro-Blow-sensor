# Arduino-ProMicro-Blow-sensor

###Installera sensor
För att installera sensorn i montern behöver den svarta inbyggnadslådan öppnas och den grå kabeln skruvas loss från den gröna skruvplinten.
Dra kabeln genom hålet i montern och fäst kabeln i skruvplinten igen. Se till att den rödfärgade kabeln är på samma sidan som markeringen "RED". Skruva igen inbyggnadslådan med de 4 skruvarna. Sätt i USB-kontakten i Mac Mini-datorn.

###Ändra gränsvärde
För att ändra gränsvärde för när blåset triggas laddar man ner [Arduino-programmet](https://www.arduino.cc/en/Main/Software) samt källkoden på denna sida. I källkoden kan variablen "threshold" ändras. Ju högre värdet är desto mer måste man blåsa. Koppla in USB-kabeln från inbyggnadslådan i datorn med Arduino-programmet på. Välj "Tools > Board > Arduino Micro" och leta upp Arduino-kortet i "Tools > Port > /dev/tty.usbmodem..". Tryck på knappen för uppladdning och koden kommer att uppdateras på Arduino-kortet. Om uppladdningen tar lång tid kan man ta ur USB-kabeln och sedan sätta i den igen för att sedan snabbt trycka på uppladdningsknappen. Lysdioder blinkar till när uppladdningen sker och sedan kan man koppla in Arduino-kortet i Mac Mini-datorn igen.
