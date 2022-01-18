#include "../lilac/Macros.hpp"
#include "../lilac/Types.hpp"

namespace cocos2d {
	class CCNode;
};

class Lilac;

namespace lilac {
	enum class TargetPosition {
		Start,
		Middle,
		End,
	};

	class ContainerManager;

	class ContainerHandler {
	protected:
		cocos2d::CCNode* m_container;

		friend class ContainerManager;

		virtual ~ContainerHandler();

	public:
		virtual void insert(TargetPosition position, cocos2d::CCNode* node) = 0;
		virtual void insert(cocos2d::CCNode* node);

		virtual TargetPosition getDefaultPosition() const;
	};

	class ContainerManager {
	protected:
		std::unordered_map<std::string, ContainerHandler*> m_customHandlers;

		friend class Lilac;

	public:
		static ContainerManager* get();

		template<class Scene>
		ContainerHandler* getHandler() const {
			this->getHandler(typeid(Scene).name());
		}
		ContainerHandler* getHandler(std::string const& sceneID) const;

		template<class Scene>
		void registerHandler(ContainerHandler* handler) {
			this->registerHandler(typeid(Scene).name(), handler);
		}
		void registerHandler(std::string const& sceneID, ContainerHandler* handler);
	};
}
