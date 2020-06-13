//------------------
// Filename "init.h"
//------------------

//----------------------------------
//Julie & Sarah Rups-tank 2020-05-10
//----------------------------------

//-------------------
// BlueTooth settings
//-------------------

#define MASTER_CONN 0  // Connection from slave to master
#define SLAVE_CONN  1  // Connection from master to slave
#define MASTERBOX   4  // Mailbox from master to slave
#define SLAVEBOX    3  // Mailbox from slave to master

//------------------------------------------
// Commands sent via BT from master to slave
//------------------------------------------

#define STOPALL       0
#define FORWARD       1
#define BACKWARD      2
#define STOP          3
#define TURNLEFT      4
#define TURNRIGHT     5
#define NOTHING       9

//------------------------------------------
// Commands sent via BT from slave to master
//------------------------------------------

#define S1BUMP 1
#define S2BUMP 2
#define S3BUMP 3
#define S4BUMP 4
#define S1S2BUMP 5
#define S3S4BUMP 6

//-----------------------
// Turn and move settings
//-----------------------

#define TURN_TIME   1800
#define TURN_SPEED   100
#define MOVE_SPEED    50

