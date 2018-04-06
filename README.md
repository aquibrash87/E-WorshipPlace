# OneProj
Prayer timing stand alone project based on qt on Raspberry pi. Uses Gebetszeiten.de as source for monthly database query , which updates the database for the complete month. 

Install:
1. Connect to your Raspberry Pi using ssh (ssh pi@raspberrypi) or directly using HDMI
2. Install Apache (sudo apt-get install apache2 apache2-utils)
3. Install PHP (sudo apt-get install libapache2-mod-php5 php5 php-pear php5-xcache php5-mysql php5-curl php5-gd)
- The permissions aren’t set correctly just yet, so for the time being, we’ll create a index file as sudo:
    --  sudo echo "<?php phpinfo(); ?>" | sudo tee index.php
4. Install MySQL Server:(sudo apt-get install mysql-server); Client:(sudo apt-get install mysql-client)
5. Clone the repository : git clone https://github.com/aquibrash87/OneProj.git
6. Build and Run (a) mkdir build && cd build (b) cmake .. (c) make -j
