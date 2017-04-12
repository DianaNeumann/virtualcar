/**
 *
 *  This file is part of virtualcar.
 *
 *  virtualcar is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3 of the License.
 *
 *  virtualcar is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with virtualcar.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  virtualcar is a vehicle computer-powered system engine written in C to 
 *  help you research and learn more about vehicle devices and CAN protocol.
 *  This project represents a central unit or the CAN Bus, along with several
 *  different nodes that transmit and analyze signals.
 *
 *  The purpose of this code and the project is to replace paid alternatives
 *  and allow others to learn more about vehicle embedded systems.
 *
 *  The project is developed in C and it's based on a SocketCAN which is 
 *  available in any modern Linux kernel.
 *
 *  (c) Halis Duraki <duraki.halis@nsoft.ba>
 *  
 */

#define  ENON = "454E4F4E" 		/* Start a car engine 	*/
#define  ENOF = "454E4F46"		/* Stop the car engine 	*/
#define  LOCK = "4C4F434B"		/* Lock the doors 		*/
#define  DOCK = "444F434B"		/* Unlock the doors 	*/
 
#define  KILL = "4B494C4C"		/* Don't do this, the car will explode */

int car_do_something(char *what) {
	printf(" %s", what);
}

int car_start_engine() { 		/* ENON */
	car_do_something("vircar engine is turned on.");

	return 1;
}

int car_stop_engine() { 		/* ENOF */
	car_do_something("vircar engine is turned off.");

	return 1;
}

int car_lock_doors() { 			/* LOCK */
	car_do_something("vircar doors are locked.");

	return 1;
}

int car_unlock_doors() { 		/* DOCK */
	car_do_something("vircar ulocked the doors.");

	return 1;
}

int car_kill() {				/* KILL */
	car_do_something("ka-boom, pfw, aaa, ts\n");
	car_do_something("*car exploded*\n");
	/* I'll be back ... */

	system("sudo ip link delete vircar");
	exit(1);
}