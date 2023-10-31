#pragma once
#include <iostream>
#include <semaphore>
#include <thread>
#include <shared_mutex>

//inline std::binary_semaphore pingsem(1), pongsem(0);
//
//inline void ping()
//{
//	for (int i = 0; i < 500'000; ++i)
//	{
//		pingsem.acquire();
//		std::cout << "ping" << std::endl;
//		pongsem.release();
//	}
//}
//
//inline void pong()
//{
//	for (int i = 0; i < 500'000; ++i)
//	{
//		pongsem.acquire();
//		std::cout << "pong" << std::endl;
//		pingsem.release();
//	}
//}

inline std::shared_mutex mPing, mPong;

inline void ping()
{
	for (int i = 0; i < 5'000; ++i)
	{
		mPing.lock();
		std::cout << "ping" << std::endl;
		mPong.unlock();
	}
}

inline void pong()
{
	for (int i = 0; i < 5'000; ++i)
	{
		mPong.lock();
		std::cout << "pong" << std::endl;
		mPing.unlock();
	}
}

inline void pingPong()
{
	mPing.lock();
	std::thread tPing (ping);
	std::thread tPong (pong);

	tPing.join();
	tPong.join();
}