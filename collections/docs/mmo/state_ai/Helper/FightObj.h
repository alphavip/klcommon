///
/// @file FightObj.h
/// @author Kevin Lynx
///
#ifndef ___FIGHT_OBJ_H_
#define ___FIGHT_OBJ_H_

#include "../GlobalDef.h"

class CMonster;

namespace StateAI
{
	class MonsterAI;
	///
	/// ս��״̬�����࣬�����ṩ��������/�ӿڡ�
	///
	class FightObj
	{
	public:
		FightObj( MonsterAI *ai ) ;

		void Reset();

        /// ����Ƿ�ù�λ
		bool CheckReturnPeace();

        /// ���˴���
		void OnHurted();

        /// ����ս������
		void LoseTarget();

        /// ����ս������
		void EnterFight();

        void ReturnPeace();
	private:
		unsigned long m_HurtTime;
		unsigned long m_GuardTime;
		MonsterAI *m_AI;
		CMonster *m_Owner;
		Point m_EnterFightPos;
		// may keep the target info.
	};
}

#endif
