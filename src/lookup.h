/***************************************************************************
 *  Original Diku Mud copyright (C) 1990, 1991 by Sebastian Hammer,	   *
 *  Michael Seifert, Hans Henrik St{rfeldt, Tom Madsen, and Katja Nyboe.   *
 *									   *
 *  Merc Diku Mud improvments copyright (C) 1992, 1993 by Michael	   *
 *  Chastain, Michael Quan, and Mitchell Tse.				   *
 *									   *
 *  In order to use any part of this Merc Diku Mud, you must comply with   *
 *  both the original Diku license in 'license.doc' as well the Merc	   *
 *  license in 'license.txt'.  In particular, you may not remove either of *
 *  these copyright notices.						   *
 *									   *
 *  Much time and thought has gone into this software and you are	   *
 *  benefitting.  We hope that you share your changes too.  What goes	   *
 *  around, comes around.						   *
 ***************************************************************************/
 
/***************************************************************************
*	ROM 2.4 is copyright 1993-1998 Russ Taylor			   *
*	ROM has been brought to you by the ROM consortium		   *
*	    Russ Taylor (rtaylor@hypercube.org)				   *
*	    Gabrielle Taylor (gtaylor@hypercube.org)			   *
*	    Brian Moore (zump@rom.org)					   *
*	By using this code, you have agreed to follow the terms of the	   *
*	ROM license, in the file Rom24/doc/rom.license			   *
***************************************************************************/


int	clan_lookup	args( (const char *name) );
int	position_lookup	args( (const char *name) );
int 	sex_lookup	args( (const char *name) );
int 	size_lookup	args( (const char *name) );
int flag_lookup args( ( const char *name, const struct flag_type *flag_table ) );
HELP_DATA * help_lookup	args( (char *) );
int    strap_lookup	args( (const char *name) );
int    cont_lookup args( ( const char *name) );
int hair_lookup args( (const char *name) );
int eye_lookup args( (const char *name) );
int height_lookup args( (const char *name) );
int weight_lookup args( (const char *name) );
int spellfun_lookup args( ( const char *name ) );
int find_spellfun args ( (SPELL_FUN *spell ) );
int target_lookup args( ( const char *name) );
EMAIL_DATA *email_lookup args ( (const char *name ) );
CMD_DATA *cmd_lookup args( ( const char *name ) );
int mineral_lookup args( (const char *name ) );
RELIGION *religion_lookup args( ( const char *name ) );
AREA_DATA *area_lookup args( ( const char *name ) );
RELIGION *faction_lookup args( ( const char *name ) );