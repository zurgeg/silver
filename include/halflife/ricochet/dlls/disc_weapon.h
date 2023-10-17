#if !defined( DISC_WEAPON_H )
#define DISC_WEAPON_H
#ifdef _WIN32
#pragma once
#endif

class CDisc;
class CDiscWeapon : public CBasePlayerWeapon
{
public:
	void Spawn( void );
	void Precache( void );
	int iItemSlot( void ) { return 5; }
	int GetItemInfo(ItemInfo *p);

	int  AddDuplicate( CBasePlayerItem *pOriginal );
	CDisc *FireDisc( bool bDecapitator );
	void PrimaryAttack( void );
	void SecondaryAttack( void );
	bool Deploy( void );
	bool CanHolster( void );
	void Holster( int skiplocal = 0 );
	void WeaponIdle( void );

	bool UseDecrement( void ) { return TRUE; };

	int m_iSpriteTexture;
	int m_iFastShotDiscs;
private:
	unsigned short m_usFireDisc;
};

#endif // DISC_WEAPON_H
