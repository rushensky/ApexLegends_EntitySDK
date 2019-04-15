DWORD dwBase = 0;

class cEntity
{
public:
	inline static int m_iHealth()
	{
		return
			*(int*)((uintptr_t)+0x3D4);
	}

	inline static int m_iShield()
	{
		return
			*(int*)((uintptr_t)+0x150);
	}

	inline static int m_iLifeState()
	{
		return
			*(int*)((uintptr_t)+0x718);
	}

	inline static int m_iId()
	{
		return
			*(int*)((uintptr_t)+0x8);
	}

	inline static int m_iTeam()
	{
		return
			*(int*)((uintptr_t)+0x3E4);
	}

	inline int m_armorType()
	{
		return 
			*(int*)((uintptr_t)+0x3D00);
	}

	inline int m_helmetType()
	{
		return
			*(int*)((uintptr_t)+0x3CFC);
	}

	inline static char* m_sName() // хуйня нада менять
	{
		typedef char*(__fastcall *tEntityName) (uintptr_t uEntityPointer);

		static tEntityName fEntityPointer = (tEntityName)(dwBase + 0x6E72B0);

		return
			fEntityPointer((uintptr_t)nullptr);
	}

	inline static char* m_hHandle()
	{
		return
			*(char**)((uintptr_t)+0x500);
	}

	inline static Vector m_vPos()
	{
		return
			*(Vector*)((uintptr_t)+0x12C);
	}

	inline static Vector m_vAngles()
	{
		return
			*(Vector*)((uintptr_t)+0x20BC);
	}

	inline static Vector m_vEyes()
	{
		return
			*(Vector*)((uintptr_t)+0x3AA0);
	}

	inline static Vector m_AimPunch()
	{
		return
			*(Vector*)((uintptr_t)+0x2014);
	}
};
