///
/// @file BaseAI.h
/// @author Kevin Lynx
///
#ifndef ___BASE_AI_H_
#define ___BASE_AI_H_

#include "AIStateDefs.h"
#include "GlobalDef.h"
#include "StateSet.h"
#include "ShareObjTable.h"

class CMoveShape;
class CRegion;
struct stModuParam;

#define OPER_FAILED_TIME (1000)
#define CONTINUE_TIME (100)

namespace StateAI
{
	class AIDriver;

	///
	/// AI���࣬��װ״̬�������ṩ��������/������
	///
	class BaseAI
	{
	public:
		BaseAI(CMoveShape *owner);

		virtual ~BaseAI();

		virtual bool Init(const ImplConfig &impl, long init_state);

		virtual void Reset();

		virtual void Release();

		void ChangeState(long state);

		void ChangeState(long state, const AITransition &tran);

		void ChangeState(long state, const AIEvent &ev);

		AIState *GetState(long type);

		bool HasState(long state);

		virtual void Run(long timerID, long timerType);

		bool Resume(unsigned long trigerTime);

		void Stop();

        bool SetTimer(long type, ulong trigerTime, ulong interTime = 0);

        void StopTimer(long type);

		void SendEvent(const AIEvent &event);

		bool HasTarget() const;

		virtual void SetTarget(const CGUID &targetID, long targetType);

		CMoveShape *GetTarget() const;

		bool BeginSkill(stModuParam *moduParam, long x, long y, CMoveShape* target);

		/// AI Operations
        void RunScript(const char *file);

		void Stand(unsigned long time);

        /// ����ָ�������ƶ�һ�����ӣ��ú��������Ŀ�������Զ���������
		bool Move(long dir);

        /// ��ָ�������ƶ�һ���ƶ�������겻һ������Ŀ�����꣩
		bool Move(long destX, long destY);

        /// ��Ӧ�ƶ�
		virtual bool OnMove(float destX, float destY);

        /// ���ָ�������Ƿ�ɵ�
		bool IsCanMoveTo(CRegion *region, long x, long y) const ;

        /// ��ָ�������ȡָ���������һ�����꣬��������һ�����ֵ�����ָ�������ϵ�����
        /// ���赲��������������������
		bool GetNextMoveDestCell(long dir, long dis, long &x, long &y) const;

        /// ȡ�õ�ǰ״̬����
        long CurStateType();

		/// convert state value to string
		static const char *State2Str(long state);
		static const char *Event2Str(long event);
		ShareObjTable &GetShareObjTable()
		{
			return m_ShareObjs;
		}

		CMoveShape *GetOwner()
		{
			return m_Owner;
		}
	protected:
		long ToShapeState(long aiState);

        AIState *CurState();

		virtual void OnEvent(const AIEvent &event);
	protected:
        /// store states
		StateSet m_States;
        /// state machine
		MachineType *m_Machine;
        /// not used
		ShareObjTable m_ShareObjs;
        /// a timer wrapper, to drive the AI
		AIDriver *m_AIDriver;
		CMoveShape *m_Owner;
        /// attack target info
		CGUID m_TargetID;
		long m_TargetType;
        /// event script handles ai events
        std::string m_EventScript;
	};
}
#endif
