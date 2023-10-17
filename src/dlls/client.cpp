/*
This code is (C) Silver Team 2023 under the GNU GPL 3.0, although
Valve's header files are under the HL1 license.
*/
#include <halflife/common/mathlib.h>
#include <halflife/common/const.h>
#include <halflife/dlls/client.h>
#include <cstdio>
extern void respawn( entvars_t* pev, bool fCopyCorpse ){}

extern bool ClientConnect( edict_t *pEntity, const char *pszName, const char *pszAddress, char szRejectReason[ 128 ] ){
    // connects to a server
    // TODO: how do we read an edict_t?
    // edit: its an entity (https://developer.valvesoftware.com/wiki/Edict_t)
    printf("ClientConnect( unknown type, %s, %s, %s)\n");
    return true; // what do we return here?
}
extern void ClientDisconnect( edict_t *pEntity ){
    // I can only assume this just disconnects from the server
}

// TODO: fill in dummy impls

extern void ClientKill( edict_t *pEntity ){}
extern void ClientPutInServer( edict_t *pEntity ){}
extern void ClientCommand( edict_t *pEntity ){}
extern void ClientUserInfoChanged( edict_t *pEntity, char *infobuffer ){}
extern void ServerActivate( edict_t *pEdictList, int edictCount, int clientMax ){}
extern void ServerDeactivate( void ){}
extern void StartFrame( void ){}
extern void PlayerPostThink( edict_t *pEntity ){}
extern void PlayerPreThink( edict_t *pEntity ){}
extern void ParmsNewLevel( void ){}
extern void ParmsChangeLevel( void ){}

extern void ClientPrecache( void ){}

extern const char *GetGameDescription( void ){}
extern void PlayerCustomization( edict_t *pEntity, customization_t *pCust ){}

extern void SpectatorConnect ( edict_t *pEntity ){}
extern void SpectatorDisconnect ( edict_t *pEntity ){}
extern void SpectatorThink ( edict_t *pEntity ){}

extern void Sys_Error( const char *error_string ){}

extern void SetupVisibility( edict_t *pViewEntity, edict_t *pClient, unsigned char **pvs, unsigned char **pas ){}
extern void	UpdateClientData ( const struct edict_s *ent, int sendweapons, struct clientdata_s *cd ){}
extern int AddToFullPack( struct entity_state_s *state, int e, edict_t *ent, edict_t *host, int hostflags, int player, unsigned char *pSet ){}
extern void CreateBaseline( int player, int eindex, struct entity_state_s *baseline, struct edict_s *entity, int playermodelindex, vec3_t player_mins, vec3_t player_maxs ){}
extern void RegisterEncoders( void ){}

extern int GetWeaponData( struct edict_s *player, struct weapon_data_s *info ){}

extern void	CmdStart( const edict_t *player, const struct usercmd_s *cmd, unsigned int random_seed ){}
extern void	CmdEnd ( const edict_t *player ){}

extern int	ConnectionlessPacket( const struct netadr_s *net_from, const char *args, char *response_buffer, int *response_buffer_size ){}

extern int GetHullBounds( int hullnumber, float *mins, float *maxs ){}

extern void	CreateInstancedBaselines ( void ){}

extern int	InconsistentFile( const edict_t *player, const char *filename, char *disconnect_message ){}

extern int AllowLagCompensation( void ){}