#ifndef __MESSAGETYPE_H__
#define __MESSAGETYPE_H__

/*Э��ţ��������ͬ��*/

namespace MessageType
{
	enum eMsgType
	{
		eMsg_LOGIN = 1,					//��¼
		eMsg_LOGIN_RESULT,				//���������ؽ��
		eMsg_REGISTER,					//ע��
		eMsg_REGISTER_RESULT,			//���������ؽ��
		eMsg_ACCOUNT_INFO,				//��ȡ�˺���Ϣ
		eMsg_ACCOUNT_INFO_RESULT,		//���������ؽ��
		eMsg_PLAYER_INFO,				//��ȡ��ҽ�ɫ����
		eMsg_PLAYER_INFO_RESULT,		//���������ؽ��
		eMsg_START_GAME_SINGLE,			//��ʼ����ģʽ
		eMsg_START_GAME_SINGLE_RESULT,	//���������ؽ��
		eMsg_START_GAME_TEAM,			//��ʼ��սģʽ
		eMsg_START_GAME_SURVIVAL,		//��ʼ����ģʽ
		eMsg_CHAT_SEND,					//������Ϣ����
		eMsg_CHAT_RECEIVE,				//������Ϣ����
		eMsg_MOVE,						//����ƶ�
		eMsg_UPDATE_POSITION,			//�������λ��
		eMsg_DIVIDE,					//��ҷ������
		eMsg_SPIT_SPORE,				//��������Ӳ���
		eMsg_SPIT_SPORE_RESULT,			//���������ؽ��
		eMsg_EAT_SPORE,					//��ҳԵ�����
		eMsg_ADD_PRICK,					//��Ӵ�
		eMsg_EAT_PRICK,					//���������
		eMsg_EAT_BEAN,					//��ҳԶ���
		eMsg_UPDATE_SPORE,				//����������Ϣ
		eMsg_ENTER_PLAYER,				//����ҽ��뷿��
		eMsg_PLAYER_CONCENTRATE,		//����кͲ���
		eMsg_UPDATE_TIME,				//������Ϸʱ��

		eMsg_MAX = 9999
	};
}


#endif
