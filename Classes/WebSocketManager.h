#ifndef __WebSocketManager_H__
#define __WebSocketManager_H__

#include "cocos2d.h"
#include "network\WebSocket.h"

USING_NS_CC;
using namespace cocos2d::network;

/*��������շ�������ͨ�Ź����࣬�̳���WebSocket�ӿڣ���Ϣ��ʽΪJson�ַ���*/

class WebSocketManager : public Ref, public WebSocket::Delegate {
public:
	WebSocketManager();
	~WebSocketManager();

	static WebSocketManager * getInstance();

	virtual bool init();

	virtual void onOpen(WebSocket * ws);		//���������������

	virtual void onMessage(WebSocket * ws, const WebSocket::Data & data);		//�յ���Ϣ

	virtual void onClose(WebSocket * ws);		//���ӹر�

	virtual void onError(WebSocket * ws, const WebSocket::ErrorCode & data);		//����

	void sendMsg(const std::string & msg);		//�������������Ϣ

	void processReturnMsg(const std::string & msg);		//����

	void getGameConfig(int type, std::string & config);
	void setAccountName(const std::string & name);
	std::string & getAccountName();
private:
	static WebSocketManager * s_WebSocketManager;
	WebSocket * _socket;
	std::map<int, std::string> _gameConfig;		//��ͼ��ʼ������
	std::string _accountName;		//�˻���

};

#endif
