This is a Codebase I worked on with a bloke by the name of Synon. It's really big! So it's probably full of bugs! I'll enable bug tracking so that if anyone wants to sift through it and find them they can post them. I'll try to keep up to date with the bug fixes as much as I can. This Rom Codebase ships with about 12 OLC's including one for commands, skills, skill groups, religion, and a few more. It has object and room progs that had many hours spent debugging them as much as possible. Special objects, and pets can level along with the player. It comes with a most wonderful vampire snippet, and a buggy werewolf snippet that follows the rotation of the moon. Auctions, quests, global quests. A signal handler to help protect from crashes. MCCP, MXP. Players can build mines and mine for ore. It offers multiclassing revamp'd creation process. Many hundreds of commands. A custom weather code. Area format has been changed to resemble pfiles key scheme. Buffers that don't over flow, player owned houses, randomly generated unique objects, and lots more! There's a change.log in the home directory. This is a big codebase, and I got it to compile with gcc4, and even managed to boot it up!

Update:
Source code was updated to compile on gcc4.4.1 cleanly on 32/64bit arch.

Added automapper which only shows explored rooms and paths to waypoint.

Added waypoints to set so an immortal can set a waypoint to anywhere on anyone

mxp enable/disable command added.

Compiles under g++ 4.4.1
