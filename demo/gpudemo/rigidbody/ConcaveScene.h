#ifndef CONCAVE_SCENE_H
#define CONCAVE_SCENE_H

#include "GpuRigidBodyDemo.h"

class ConcaveScene : public GpuRigidBodyDemo
{
public:

	ConcaveScene(){}
	virtual ~ConcaveScene(){}
	virtual const char* getName()
	{
		return "GRBConcave";
	}

	static GpuDemo* MyCreateFunc()
	{
		GpuDemo* demo = new ConcaveScene;
		return demo;
	}

	virtual void setupScene(const ConstructionInfo& ci);

	virtual void createDynamicObjects(const ConstructionInfo& ci);

	virtual void createConcaveMesh(const ConstructionInfo& ci);

	
};


class ConcaveSphereScene : public ConcaveScene
{
public:

	ConcaveSphereScene(){}
	virtual ~ConcaveSphereScene(){}
	virtual const char* getName()
	{
		return "ConcaveSphere";
	}

	static GpuDemo* MyCreateFunc()
	{
		GpuDemo* demo = new ConcaveSphereScene;
		return demo;
	}

	virtual void setupScene(const ConstructionInfo& ci);

	virtual void createDynamicObjects(const ConstructionInfo& ci);

};


class ConcaveCompoundScene : public ConcaveScene
{
public:

	ConcaveCompoundScene(){}
	virtual ~ConcaveCompoundScene(){}
	virtual const char* getName()
	{
		return "GRBConcaveCompound";
	}

	static GpuDemo* MyCreateFunc()
	{
		GpuDemo* demo = new ConcaveCompoundScene;
		return demo;
	}

	virtual void setupScene(const ConstructionInfo& ci);

	virtual void createDynamicObjects(const ConstructionInfo& ci);

};

#endif //CONCAVE_SCENE_H